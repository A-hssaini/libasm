/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahssaini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:57:29 by ahssaini          #+#    #+#             */
/*   Updated: 2021/06/07 16:57:31 by ahssaini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

#define STRCMP(a, b) printf("strcmp % 3d\t\tft_strcmp % 3d\n", strcmp(a, b), ft_strcmp(a, b))
#define STRLEN(a) printf("strlen %lu\t\tft_strlen %lu\n", strlen(a), ft_strlen(a));
#define STRCPY(d, s) printf("stcpy |%s|\n", strcpy(d, s))
#define FT_STRCPY(d, s) printf("stcpy |%s|\n", ft_strcpy(d, s))
#define STRDUP(s) printf("strdup |%s|\t\tft_strdup |%s|\n", strdup(s), ft_strdup(s))

size_t ft_strlen(char const *str);
int ft_strcmp(char const *s1, char const *s2);
char *ft_strcpy(char *dst, char const *src);
ssize_t ft_write(int fd, void const *buf, size_t nbyte);
ssize_t ft_read(int fd, void *buf, size_t nbyte);
char *ft_strdup(char const *s1);

int main(void)
{
	char *s;
	int i;
	int r;
	int w;
	size_t n_byte;
	int fd;
	char buffer[100];

	bzero(buffer, 100);
	printf("---------------------main----------------------\n\n");

	/****************************** READ ******************************/

	/* 	read form inpus */
	// r = ft_read(-1, buffer, 10);
	// printf("r = %d\t\tbuf =  |%s|\n", r, buffer);

	/*	read Makfile */

	// n_byte = 10;
	// fd = open("Makefile", O_RDONLY);

	// buffer[n_byte] = 0;
	// while ((r = ft_read(fd, buffer, n_byte)) > 0)
	// {
	// 	buffer[n_byte] = 0;
	// 	printf("%s", buffer);
	// }
	// if (r == 0)
	// 	printf("%s", buffer);
	/* wrong fd */
    // int fd1 = open("Makefile", O_RDONLY);
	// fd = 1;
	// r = ft_read(1, buffer, 6);

	// printf("r = %d\t\tError message : |\x1b[31m%s\x1b[0m|\t\tbuf =  |%s|\n", r, strerror(errno), buffer); //errno = 9

	/******************************* WRITE *******************************/
		// /*	write in stdout */
		//  w = ft_write(1, "hello world\n", 12);
		//  printf("w = %d\n", w);

	/* 	worng fd */
	// w = write(1, "hello world\n", 0);
	//  printf("w = %d\t\tError message : |\x1b[31m%s\x1b[0m|\n", w, strerror(errno));

	/*	write in file */
	//fd = open("test.txt", O_CREAT|  O_RDONLY |O_WRONLY | O_APPEND, 0644);
	// w = ft_write(fd, NULL, 3);
	 //printf("w = %d\t\tError message : |\x1b[31m%s\x1b[0m|\n", w, strerror(errno));
	// close(fd);

	/******************************* STRLEN *******************************/

	//printf("strlen %lu\n", strlen(NULL));
	//printf("ft_strlen %lu\n",ft_strlen(NULL));
	//STRLEN("");
	//STRLEN("hello world");

	/******************************* STRCMP *******************************/

	// STRCMP("accca", "ccc");
	// STRCMP("cccc", "ccc");
	// STRCMP("ccc", "cccc");
	// STRCMP("ccc", "acc");
	// STRCMP("acc", "ccc");
	// STRCMP("", "hello");
	// STRCMP("hello", "");
	// STRCMP("", "");

	/******************************* STRCPY *******************************/

	// STRCPY(buffer, "hello");
	// FT_STRCPY(buffer, "hello");
	// printf("\n---------------\n");
	// STRCPY(buffer, "hi");
	// FT_STRCPY(buffer, "hi");
	// printf("\n---------------\n");
	// STRCPY(buffer, "");
	// FT_STRCPY(buffer, "");

	/******************************* STRDUP *******************************/

	//STRDUP("gagaga");
	// STRDUP("hi");
	// STRDUP("hello world!");

	return (0);
}
