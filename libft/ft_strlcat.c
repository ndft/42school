#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	i;

	dstlen = ft_strlen(dst);
	if (dstsize < dstlen)
		dstlen = dstsize;
	i = dstlen;
	while (src[dstlen - i] && dstlen + 1 < dstsize)
	{
		dst[dstlen] = src[dstlen - i];
		dstlen++;
	}
	if (i < dstsize)
		dst[dstlen] = '\0';
	return (ft_strlen(src) + i);
}
