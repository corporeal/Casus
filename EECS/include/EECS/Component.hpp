#pragma once

#include <typeinfo>
#include <functional>
#include <vector>

namespace EECS {
    class BaseComponent {
    public:
        virtual ~BaseComponent() = 0;
    };

    template <typename T>
    class Component : public BaseComponent {
    public:
        virtual ~Component() = 0;
        static inline std::type_info GetTypeID() {
            return typeid(T);
        }
    };

    template <typename T>
    Component<T>::~Component() {}

    typedef std::vector<std::reference_wrapper<BaseComponent>> ComponentVector;
}