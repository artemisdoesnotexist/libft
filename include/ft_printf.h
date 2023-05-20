/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-der <avan-der@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/12/01 21:06:16 by avan-der      #+#    #+#                 */
/*   Updated: 2023/03/03 16:39:04 by avan-der      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
int		handle_conversion(va_list args, const char *format, int i);
int		print_char(int c);
int		print_string(char *s);
int		print_ptr(unsigned long long ptr);
int		print_number(int n);
int		print_number_base(long long int n, const char *base);
int		print_unsigned_number_base(long long int n, const char *base);
int		print_hex(long long int n, int is_uc);
int		print_unsigned_number_b10(long long int n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_itoa(int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
#endif