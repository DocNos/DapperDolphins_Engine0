#pragma once




template <typename T>
class Manager
{
public:
	typedef void (*functionPtr) (T param);
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
	int sizeT() { return list_.size(); }

private:
	std::vector<T> list_;
	int renderReady_ = 0;
};

void ManagerUpdate(float dt);