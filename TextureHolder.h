#pragma once
#ifndef TEXTURE_HOLDER_H
#define TEXTURE_HOLDER_H
#include <SFML/Graphics.hpp>
#include <map>
using namespace sf;
using namespace std;
class TextureHolder
{
private:
	// map container for related strings and textures
	map<string, Texture> m_Textures;
	// a pointer of the same type as the class itself, the one and only instance
	static TextureHolder* m_s_Instance;
public:
	TextureHolder();
	static Texture& GetTexture(string const& filename);
};
#endif // !TEXTURE_HOLDER_H
