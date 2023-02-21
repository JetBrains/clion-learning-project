struct Colour
{
    unsigned char r, g, b;
};

int main()
{
    unsigned int rgb = 0xffc0cb;
    unsigned char red = (rgb >> 16) &0xFF;
    unsigned char green = (rgb >> 8) &0xFF;
    unsigned char blue = rgb &0xFF;

    Colour pink = {red, green, blue};
}
