#include "helpers.h"
#include <stdio.h>

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            RGBTRIPLE current_pixel = image[j][i];
            if (current_pixel.rgbtBlue == 0)
            {
                current_pixel.rgbtBlue = 255;
                current_pixel.rgbtRed = 255;
            }
        }
    }
}
