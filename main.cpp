
#include <cstdlib>
#include <thread>

#include "RayNet.h"

#include "XYZ.h"
#include "Camera.h"
#include "Sphere.h"
#include "Image.h"
#include "Renderer.h"
#include "Material.h"
#include "Window.h"

using namespace std;

int main(int argc, char* argv[]) {

    {
        double aspectRatio = 16.0/9.0;
        size_t width = 300;
        size_t height = static_cast<size_t>(width/aspectRatio);
        
        Camera camera{ Vector3{ 1.0, 0.0, 0.0}, Vector3{ 0.0, 0.0, -1.0}, Vector3{ 0.0, 1.0, 0.0}, 90.0, 2.0, static_cast<double>(width)/height };
        Material material{ Vector3{ 1.0, 0.0, 0.0} };
        Sphere sphere{ Vector3{ 0.0, 0.0, -4.0}, 1.0, material };
        Image image{ height, width };
        
        Renderer renderer{ &camera, &sphere, &image };
        Window win{ width, height, "Ray-Net", renderer };
        win.update();
        
    }

    return 0;
}