typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
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

	// 满了-》增容
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

int StackSize(ST* ps)
{
	assert(ps);

	return ps->top;
}

bool StackEmpty(ST* ps)
{
	assert(ps);

	return ps->top == 0;
}


typedef struct {
	ST s1;
	ST s2;
} MyQueue;


MyQueue* myQueueCreate() {
	MyQueue* ps = (MyQueue*)malloc(sizeof(MyQueue));
	if (ps == NULL)
	{
		printf("malloc failed");
		exit(-1);
	}
	StackInit(&ps->s1);
	StackInit(&ps->s2);
	return ps;
}

void myQueuePush(MyQueue* obj, int x) {
	if (StackEmpty(&obj->s1))
	{
		StackPush(&obj->s2, x);
	}
	else
	{
		StackPush(&obj->s1, x);
	}
}

int myQueuePop(MyQueue* obj) {
	ST* empty = &obj->s1;
	ST* nonempty = &obj->s2;
	if (!StackEmpty(empty))
	{
		empty = &obj->s2;
		nonempty = &obj->s1;
	}
	while (StackSize(nonempty) > 1)
	{
		StackPush(empty, StackTop(nonempty));
		StackPop(nonempty);
	}
	STDataType top = StackTop(nonempty);
	StackPop(nonempty);
	while (StackSize(empty) > 0)
	{
		StackPush(nonempty, StackTop(empty));
		StackPop(empty);
	}
	return top;
}

int myQueuePeek(MyQueue* obj) {
	ST* empty = &obj->s1;
	ST* nonempty = &obj->s2;
	if (!StackEmpty(empty))
	{
		empty = &obj->s2;
		nonempty = &obj->s1;
	}
	while (StackSize(nonempty) > 1)
	{
		StackPush(empty, StackTop(nonempty));
		StackPop(nonempty);
	}
	STDataType top = StackTop(nonempty);
	while (StackSize(empty) > 0)
	{
		StackPush(nonempty, StackTop(empty));
		StackPop(empty);
	}
	return top;
}

bool myQueueEmpty(MyQueue* obj) {
	return StackEmpty(&obj->s1) && StackEmpty(&obj->s2);
}

void myQueueFree(MyQueue* obj) {
	StackDestory(&obj->s1);
	StackDestory(&obj->s2);
	free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/