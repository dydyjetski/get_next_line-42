/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:54:44 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/25 19:54:45 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t	ft_strlen(char *str);
char	*ft_read_line(int fd, char *left_str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *left_str, char *buff);
char	*ft_strchr(char *s, int c);
char	*ft_get_line(char *left_str);
char	*ft_new_left_str(char *left_str);

#endif
