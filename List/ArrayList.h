#include<cstdio>

class ArrayList
{
	const int MAX_SIZE_LIST = 100;
	int length;

public:
	ArrayList(const int &init_length)
	:length(init_length)
	{}
	~Arraylist(){}

	void insert(const int &pos, const int &item){
		if(!isFull() && pos >= 0 && pos <= length){
			for(int i=length; i >= pos; --i)
				data[i] = data[i-1];
			data[pos] = item;
			length++;
		}
		else error("포화상태 오류 또는 삽입 위치 오류");
	}
	void remove(const int &pos){
		if(!isEmpty && pos >= 0 && pos < length)
			for(int i=pos+1; i < length; ++i)
				data[i-1] = data[i];
			length--;
	}

	int getEntry(const int &pos){ return data[pos]; }
	bool isEmtpy(){ return length==0; }
	bool isFull() { return length==MAX_SIZE_LIST; }

	bool isFind(const int &item){
		for(int i=0; i < length; ++i)
			if(data[i]==item) return true;
		return false;
	}
	void replace(const int &pos, const int &item){
		data[pos] = item;
	}
	int size(){ return length; }
	void display(){
		printf("[배열로 구현한 리스트 전체 항목 수 = %2d]: ", size());
		for(int i=0; i < length; ++i)
			printf("[%2d] ", data[i]);
		printf("\n");
	}
	void clear() {length=0;}
}

