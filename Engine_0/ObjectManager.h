#pragma once




template <typename T>
class Manager
{
public:
	typedef void (*functionPtr) (T param); // void function ptr
	Manager()
	{
		// Don't do dat
		// List is not a pointer, a new list is already created on construction
		// list_ = new std::vector<T>;
	}
	
	
	void executeT(functionPtr update)
	{
		// Lambda
		// T t calls the copy constructor so you end up updating a copy
		// T& uses the actual variable inside list_
		for (T& t : list_) // Updating every T t in the private  member var list_
		{
			update(t);
		}
	}
	void addObj(T object)
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