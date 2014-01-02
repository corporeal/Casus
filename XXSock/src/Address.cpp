#include <XXSock/XXSock.hpp>

namespace XXSock {
    AddressIPv4::AddressIPv4() {
        _Address = 0;
        _Port = 0;
    }

    AddressIPv4::AddressIPv4(uint8_t a, uint8_t b, uint8_t c, uint8_t d, uint16_t port) {
        _Address = (a << 24) | (b << 16) | (c << 8) | d;
        _Port = port;
    }
    
    AddressIPv4::AddressIPv4(uint32_t address, uint16_t port) {
        _Address = address;
        _Port = port;
    }

    uint32_t AddressIPv4::GetAddress() const {
        return _Address;
    }

    uint8_t AddressIPv4::GetA() const {
        return (uint8_t)(_Address >> 24);
    }

    uint8_t AddressIPv4::GetB() const {
        return (uint8_t)(_Address >> 16);
    }

    uint8_t AddressIPv4::GetC() const {
        return (uint8_t)(_Address >> 8);
    }

    uint8_t AddressIPv4::GetD() const {
        return (uint8_t)(_Address);
    }

    uint16_t AddressIPv4::GetPort() const {
        return _Port;
    }

    bool AddressIPv4::operator==(const AddressIPv4 &other) const {
        return (_Address == other._Address) && (_Port == other._Port);
    }

    bool AddressIPv4::operator!=(const AddressIPv4 &other) const {
        return (_Address != other._Address) || (_Port != other._Port);
    }
}