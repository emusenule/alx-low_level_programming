

/**
 * _isalpha - This function checks for alphabet characters
 * @c: Takes one int argument for check
 *
 * Return: 1 if successful, else 0 if false
 */


int _isalpha(int c)
{
	if ((c > 97 && c <= 122) || (c > 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
