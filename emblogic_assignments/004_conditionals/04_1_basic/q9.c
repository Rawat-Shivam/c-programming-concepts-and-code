
#include<stdio.h>

int main()
{
	int i=0;
	char ch='a';
	float f=1.1f;

	enum e{ hi};

	switch(i);
	switch(ch);
	switch(f);
	switch(hi);


return 0;
}

#ifdef 0

The expression provided in the switch should result in a constant value otherwise it would not be valid.

Valid expressions for switch:
// Constant expressions allowed
switch(1+2+23)
switch(1*2+3%4)

// Variable expression are allowed provided
// they are assigned with fixed values
switch(a*b+c*d)
switch(a+b+c)

Duplicate case values are not allowed.

The default statement is optional.Even if the switch case statement do not have a default statement,
it would run without any problem.

The break statement is used inside the switch to terminate a statement sequence. When a break statement is reached, the switch terminates, and the flow of control jumps to the next line following the switch statement.


The break statement is optional. If omitted, execution will continue on into the next case. The flow of control will fall through to subsequent cases until a break is reached.

Nesting of switch statements are allowed, which means you can have switch statements inside another switch. However nested switch statements should be avoided as it makes program more complex and less readable.


#endif
