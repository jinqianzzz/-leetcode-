typedef char STDataType;

typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

void StackInit(ST* ps);
void StackDestory(ST* ps);
// ��ջ
void StackPush(ST* ps, STDataType x);
// ��ջ
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

// ��ջ
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

// ��ջ
void StackPop(ST* ps)
{
	assert(ps);
	// ջ���ˣ�����Pop��ֱ����ֹ���򱨴�
	assert(ps->top > 0);

	//ps->a[ps->top - 1] = 0;
	ps->top--;
}

STDataType StackTop(ST* ps)
{
	assert(ps);
	// ջ���ˣ�����Top��ֱ����ֹ���򱨴�
	assert(ps->top > 0);

	return ps->a[ps->top - 1];
}


bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}


bool isValid(char* s) {
	//1.��������ջ
	//2.�����ţ���ջ���������Ÿ��������ж��Ƿ�ƥ�䣬���ƥ�䣬������������ֹ
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
				return false;//���������������Ŷ�
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
	ret = StackEmpty(&st);//���������������Ŷ�
	StackDestory(&st);
	return ret;
}