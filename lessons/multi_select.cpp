class BiquadFilter
{
    float a0;
    float a1;
    float a2;
    float b1;
    float b2;

    float z1;
    float z2;

    float process(float in)
    {
        float out = in * a0 + z1;
        z1 = in * a1 + z2 - b1 * out;
        z2 = in * a2 - b2 * out;
        return out;
    }
};
