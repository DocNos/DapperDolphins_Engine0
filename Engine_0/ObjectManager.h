#pragma once




template <typename T>
class Manager
{
public:
	typedef void (*functionPtr) (T param); // void function ptr
	Manager()
	{
		list_ = new std::vector<T>;
	}
	
	
	void executeT(functionPtr update)
	{
		for (T t : list_) // Updating every T t in the private  member var list_
		{
			update(t);
		}
	}
	void addObj(T* object)
	{
		list_.push_back(object);
	}
	T getObj(int index)
	{
		return list_[index];
	}
	
	int sizeT() { return list_.size(); }

private:
	std::vector<T> list_;
	int renderReady_ = 0;
};

void ManagerUpdate(float dt);