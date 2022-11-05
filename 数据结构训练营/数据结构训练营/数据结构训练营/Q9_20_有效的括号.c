typedef char STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
// 入栈
void StackPush(ST* ps, STDataType x);
// 出栈
void StackPop(ST* ps);
STDataType StackTop(ST* ps);
bool StackEmpty(ST* ps);

void StackInit(ST* ps)
{
	assert(ps);

	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}

	ps->capacity = 4;
	ps->top = 0;
}

void StackDestory(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = ps->capacity = 0;
}

// 入栈
void StackPush(ST* ps, STDataType x)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, ps->capacity * 2 * sizeof(STDataType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity *= 2;
		}
	}

	ps->a[ps->top] = x;
	ps->top++;
}

// 出栈
void StackPop(ST* ps)
{
	assert(ps);
	// 栈空了，调用Pop，直接中止程序报错
	assert(ps->top > 0);

	//ps->a[ps->top - 1] = 0;
	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	// 栈空了，调用Top，直接中止程序报错
	assert(ps->top > 0);

	return ps->a[ps->top - 1];
}


bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}


bool isValid(char* s) {
	//1.左括号入栈
	//2.右括号，出栈顶的左括号跟右括号判断是否匹配，如果匹配，继续，否则终止
	ST st;
	StackInit(&st);
	char top;
	bool ret;
	while (*s != '\0')
	{
		switch (*s)
		{
		case '(':
		case '[':
		case '{':
			StackPush(&st, *s);
			s++;
			break;
		case ')':
		case ']':
		case '}':
			if (StackEmpty(&st))
			{
				StackDestory(&st);
				return false;//测试用例中右括号多
			}
			top = StackTop(&st);
			StackPop(&st);
			if ((*s == ')' && top != '(')
				|| (*s == ']' && top != '[')
				|| (*s == '}' && top != '{'))
			{
				StackDestory(&st);
				return false;
			}
			else
				s++;
		}
	}
	ret = StackEmpty(&st);//测试用例中左括号多
	StackDestory(&st);
	return ret;
}