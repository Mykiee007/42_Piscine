/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvelasqu <mvelasqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:10:52 by mvelasqu          #+#    #+#             */
/*   Updated: 2025/10/18 17:25:28 by mvelasqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int ft_strlen(char *src)
{
	int	i;
	int count;

	count =0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
		
}
int main(void)
{
	char	src[] = "hello";
	char	dest[ft_strlen(src) + 1];	
	int n;

// ** Section uses my ft_strncpy**

	n = 3;
	printf("source %s\n", src);
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);
	n = 0;
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);
	n = 5;
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);
	n = 7;
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);
	n = -4;
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);

// ** Section uses man strncpy** 

 	n = 3;
	printf("source %s\n", src);
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);
	n = 0;
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);
	n = 5;
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);
	n = 7;
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);
	n = -4;
	printf("if n: %d\n", n);
	strncpy(dest,src,n);
	printf("%s\n", dest);

	return (0);
}*/
