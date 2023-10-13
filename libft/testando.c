/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testando.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:41:14 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/13 10:41:15 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t strlcat(char *dst, const char *src, size_t size) {
    size_t srclen = strlen(src);
    size_t dstlen = strlen(dst);
    size_t total = srclen + dstlen;

	printf("destino: %s\n", dst);
	printf("tamanho de src: %zu\n", srclen);
	printf("tamanho de dst: %zu\n", dstlen);
    printf("tamanho total: %zu\n", total);
	printf("tamanho passado: %zu\n", size);
    if (size <= dstlen)
        return total - (dstlen - size);

    strncat(dst, src, size - dstlen - 1);
    dst[size - 1] = '\0';
	printf("Concatenated: %s\n", dst);
    return total;
}

int main() {
    char *dest = "Hello, People of the Great ";
    const char *src = "world!";
    size_t size = sizeof(dest);

    size_t result = strlcat(dest, src, 10);

    printf("Concatenated: %s\n", dest);
    printf("Total Length: %zu\n", result);

    return 0;
}
