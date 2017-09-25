/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbalart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 15:17:32 by vbalart           #+#    #+#             */
/*   Updated: 2016/12/01 15:21:09 by vbalart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static t_list		*get_data(t_list **flst, int const fd)
{
	t_list				*fcurrent;
	t_list				*fprev;
	t_file				*state;

	fcurrent = *flst;
	fprev = NULL;
	while (fcurrent != NULL)
	{
		if (((t_file*)(fcurrent->content))->fd == fd)
			return (fcurrent);
		fprev = fcurrent;
		fcurrent = fcurrent->next;
	}
	state = (t_file*)ft_malloc_prot(sizeof(t_file));
	state->stock = ft_strnew(BUFF_SIZE);
	state->fd = fd;
	fcurrent = ft_lstnew(NULL, sizeof(t_file));
	fcurrent->content = state;
	if (fprev != NULL)
		fprev->next = fcurrent;
	else
		*flst = fcurrent;
	return (fcurrent);
}

static	int			gnl_check_read(char *buffer, t_list *fdata, char **line)
{
	char				*tmp;

	if ((tmp = ft_strchr(buffer, '\n')))
	{
		*tmp = '\0';
		*line = ft_strjoin(((t_file*)(fdata->content))->stock, buffer);
		free(((t_file*)(fdata->content))->stock);
		((t_file*)(fdata->content))->stock = ft_strdup(tmp + 1);
		tmp = NULL;
		free(buffer);
		return (1);
	}
	return (0);
}

static int			gnl_check_stock(t_list *fdata, char **line)
{
	char				*tmp;
	char				*tmp2;

	if ((tmp = ft_strchr(((t_file*)(fdata->content))->stock, '\n')))
	{
		*tmp = '\0';
		*line = ft_strdup(((t_file*)(fdata->content))->stock);
		tmp2 = ft_strdup(tmp + 1);
		free(((t_file*)(fdata->content))->stock);
		((t_file*)(fdata->content))->stock = tmp2;
		return (1);
	}
	return (0);
}

static	int			gnl_read(int fd, t_list *fdata, char **line)
{
	int					ret;
	char				*tmp2;
	char				*buffer;

	buffer = ft_strnew(BUFF_SIZE);
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = '\0';
		if (gnl_check_read(buffer, fdata, line))
			return (1);
		tmp2 = ft_strjoin(((t_file*)(fdata->content))->stock, buffer);
		free(((t_file*)(fdata->content))->stock);
		((t_file*)(fdata->content))->stock = ft_strdup(tmp2);
		free(tmp2);
	}
	free(buffer);
	buffer = NULL;
	if (ret == -1)
		return (-1);
	return (0);
}

int					get_next_line(const int fd, char **line)
{
	static	t_list		*lfile;
	t_list				*fdata;
	int					ret;

	if (fd < 0 || line == NULL)
		return (-1);
	*line = NULL;
	fdata = get_data(&lfile, fd);
	if (fdata == NULL)
		return (-1);
	if (((t_file*)(fdata->content))->stock)
	{
		if (gnl_check_stock(fdata, line))
			return (1);
	}
	ret = gnl_read(fd, fdata, line);
	if (ret == 1 || ret == -1)
		return (ret);
	if (((t_file*)(fdata->content))->stock == NULL ||
			((t_file*)(fdata->content))->stock[0] == '\0')
		return (0);
	*line = ft_strdup(((t_file*)(fdata->content))->stock);
	free(((t_file*)(fdata->content))->stock);
	((t_file*)(fdata->content))->stock = NULL;
	return (1);
}
