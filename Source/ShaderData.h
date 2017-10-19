#ifndef SHADER_DATA_H
#define SHADER_DATA_H

struct ShaderData{
    //FXAA
    bool fxaa;

    //Shadows
    bool shadow;

    //Bloom
    bool bloom;

    //Motion Blur
    bool motionblur;
    
    bool aniso;

    //Cross Processing
    bool crossProcess;

    //Parallax Mapping
    bool parallaxMap;

    //Tone Mapping
    bool toneMap;

    //Volumetric Clouds
    bool volumetricClouds;

    //GodRays
    bool godrays;

    //MSAA
    bool msaa;
};

extern ShaderData g_ShaderSettings;

#endif