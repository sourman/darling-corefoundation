#include <stddef.h>
#include <stdint.h>

const void *NSURLContentTypeKey = 0;

int CFStringIsHyphenationAvailableForLocale(void *locale)
{
	(void)locale;
	return 0;
}

long CFStringGetHyphenationLocationBeforeIndex(void *str, long loc, void *range, int opts, void *locale, unsigned int *out)
{
	(void)str;
	(void)range;
	(void)opts;
	(void)locale;
	if (out)
		*out = 0;
	return loc;
}
