/**
 * _isdigit - checks if the argument is a digit
 *
 * @c: the argument to be tested
 * Return: 1 for true and 0 for false
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
