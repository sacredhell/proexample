#define ull unsinged long long
#define rint register int
#define MAX_WORD 100001
#define MAX_HASH 100003

typedef struct word {
	ull word_name;
	int data;
	word* next;
}Word;
Word word[MAX_WORD];
int wCnt;
Word wordTable[MAX_HASH];

ull str_to_ull(char *str) {
	register ull ret = 0;
	for(rint i = 0; i < str[i]; i++) {
		ret = (ret <<5) + str[i] - 'a' + 1;
	}
	return ret;
}

urll myhash(const char* str)
{
	register ull hash = 5381;
	int c;
	while(c = *str++)
	{
		hash = (((hach << 5) + hash) + c) % MAX_HAXH;
	}
	
	return hash % MAX_HASH;
}

void int()
{
	wCnt = 0;
	for(rint i = 0; i < MAX_HASH; i++)
		wordTable[i].next = 0;
}

int find(char key[])
{
	register ull nameKey = myhash(key);
	register ull wordName = str_to_ull(key);
	for(register Word *w = wordTable[nameKey].next; w; w = w->next) {
		if(w->word_name == wordName) {
			return w->data;
		}
	}
}

void add(char key[], int data)
{
	register ull nameKey = myhash(hey);
	register Word *newWord = &word[wCnt++];
	newWord->word_name = str_to_ull(key);
	newWord->data = data;
	newWord->next = wordTable[nameKey].next;
	wordTable[nameKey].next = newWord;
}