/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trakotos <trakotos@42antananarivo.mg>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:16:11 by trakotos          #+#    #+#             */
/*   Updated: 2026/02/25 09:54:34 by trakotos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 255
# endif

char	*get_next_line(int fd, int is_free_stach);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin_2string(char *s1, char *s2);
size_t	ft_index_of(const char *s, char c);
char	*ft_substr_(char const *s, unsigned int start, size_t len);
char	*get_line(char **buffer);
char	*get_buffer(int fd, char *buffer);

#endif
