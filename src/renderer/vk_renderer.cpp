#include <vulkan/vulkan.h>

struct VkContext
{
    VkInstance instance;
};

bool vk_init(VkContext* vkContext) 
{
    VkApplicationInfo appInfo = {};
    appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
    appInfo.pApplicationName = "graphics";
    appInfo.pEngineName = "graphicsEngine";

    VkInstanceCreateInfo instanceInfo = {};
    instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    instanceInfo.pApplicationInfo = &appInfo;

    VkInstance instance; 

    VkResult result = vkCreateInstance(&instanceInfo, 0, &vkContext->instance);

    if (result == VK_SUCCESS)
    {
        return true;
    }

    return false;
}