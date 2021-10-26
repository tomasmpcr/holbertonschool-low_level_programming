#include "search_algos.h"

/**
 * advanced_binary_rec - JSDIFSDIFJDSFNSDNFSDNF
 * @array: IDFUSGHNSIDFGNSDIJKFN
 * @low: AJNDIJNFDIANFSINAFD
 * @high: ISFJDGVISKGJNSDIKJFMGS
 * @value: NAIFNIADSFMNDAFJMNDSIKFMN
 * Return: SIDFGJNSIDJFGSIDFJDFD
 */

int advanced_binary_recursion(int *arr, int l, int h, int val)
{
	int mid, i = 0;

	if (h >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < h; i++)
			printf("%d, ", arr[i]);
		printf("%d\n", arr[h]);
		mid = l + (h - l) / 2;

		if (arr[mid] == val)
		{
			if (l == mid)
				return (mid);
			if (mid - 1 && arr[mid - 1] == val)
				return (advanced_binary_recursion(arr, l, mid, val));
			return (mid);
		}
		if (arr[mid] > val)
			return (advanced_binary_recursion(arr, l, mid - 1, val));
		return (advanced_binary_recursion(arr, mid + 1, h, val));
	}
	return (-1);
}

/**
 * advanced_binary - ADHFGADIUHFAIDUFH
 * @array: ADIJSFGJADSFIKJADAD
 * @size: JDIGJAISDFJADSIFJAD
 * @value: JEFGIASDJFDIKSFJDSA
 * Return: DFSHJGIASDJFIDSJFMIDASFJM
 */

int advanced_binary(int *array, size_t size, int value)
{
	int h, l;

	if (!array)
		return (-1);
	l = 0;
	h = size - 1;
	return (advanced_binary_recursion(array, l, h, value));
}
