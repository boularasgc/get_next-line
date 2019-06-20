/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboulara <mboulara@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 15:42:57 by mboulara          #+#    #+#             */
/*   Updated: 2019/04/23 20:57:04 by mboulara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include "libft/libft.h"
# include <limits.h>

# define BUFF_SIZE 42
# define CLEAR(x) if (x != NULL) { free(x); x = NULL; }

typedef struct	s_fd
{
	char	*hd;
	char	*ptr;
}				t_fd;

int				get_next_line(const int fd, char **line);

#endif
