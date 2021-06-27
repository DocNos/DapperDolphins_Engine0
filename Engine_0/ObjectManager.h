#pragma once



template <typename T>
class Manager
{
public:
	typedef void (*functionPtr) (T param);

	void executeT(functionPtr update)
	{
		for (T t : list_)
		{
			update(t);
		}
	}
	int sizeT() { return list_.size(); }

private:
	std::vector<T> list_;
	int renderReady_ = 0;
};