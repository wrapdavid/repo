#include<iostream>
#include<string>
class Entity {
public:
 virtual std::string GetName() { return "Entity"; }
};

class Player :public Entity
{
private:
	std::string m_name;
public:
	Player(const std::string& name)
		:m_name(name) {}
	std::string GetName() override{ return m_name; }
};

void PrintName(Entity* name) {
	std::cout << name->GetName() << std::endl;

}

int main() {
	Entity* entity = new Entity();
	PrintName(entity);
	Player* player = new Player("david");
	PrintName(player);
	std::cin.get();

}
