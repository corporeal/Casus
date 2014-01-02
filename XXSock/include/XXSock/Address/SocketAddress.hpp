#pragma once

#include <cstdint>
#include <string>

#include "../XXSock.hpp"

namespace XXSock {
    struct IPConversionError {
    public:
        enum Type {
            OK = 0,
            InvalidInput = 1,
            UnsupportedFamily = 2,
            InvalidParameter = 3,
            InvalidAddress = 4,
            InvalidBufferSize = 5,
            Unknown = ~0
        };
        IPConversionError(Type type);
        operator Type() const;
    private:
        Type _Type;
        template <typename T>
        operator T() const;
    };

    struct SocketAddress {
        uint16_t Family;
        int8_t Data[14];
    };

    struct IPv4NumericalAddress {
        uint32_t Address;
    };

    struct IPv6NumericalAddress {
        uint8_t Address[16];
    };

    struct SocketAddressIPv4 {
        uint16_t Family;
        uint16_t Port;
        IPv4NumericalAddress Address;
        uint8_t Reserved[8];
    };

    struct SocketAddressIPv6 {
        uint16_t Family;
        uint16_t Port;
        uint32_t FlowInformation;
        IPv6NumericalAddress Address;
        uint32_t ScopeID;

        IPConversionError AddressFromString(const std::string *address);
        IPConversionError StringFromAddress(std::string *address);
    };

    struct SocketAddressStorage {
        uint16_t Family;
        uint8_t PrePadding[sizeof(int64_t) - sizeof(uint16_t)];
        int64_t Alignment;
        uint8_t PostPadding[128 - (2 * sizeof(int64_t))];
    };
}