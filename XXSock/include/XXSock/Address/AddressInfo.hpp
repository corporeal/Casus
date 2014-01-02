#pragma once

#include <cstddef>
#include <cstdint>

#include "../XXSock.hpp"
#include "SocketAddress.hpp"

namespace XXSock {
    struct AddressInfo {
        int Flags;
        int Family;
        int SocketType;
        int Protocol;
        std::size_t SocketAddressLength;
        SocketAddress *Address;
        AddressInfo *Next;
    };
}