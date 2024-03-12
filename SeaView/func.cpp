#include <vector>
#include <algorithm>

class SeaView
{
private:
	std::vector<int> index;
public:

	SeaView(std::vector<int> v)
	{
		int flastIndex = v.size() - 1;
		index.push_back(flastIndex);
		int max = v.back();

		for (int i = v.size() - 1; i != -1; i--)
		{
			if (v[i] > max)
			{
				max = v[i];
				index.push_back(i);
			}
		}
	}

	std::vector<int> getIndex()
	{
		std::reverse(index.begin(), index.end());

		return index;
	}

};