//
// protection_option.hpp
//
// This file is part of the BMW Some/IP implementation.
//
// Copyright © 2013, 2014 Bayerische Motoren Werke AG (BMW).
// All rights reserved.
//

#ifndef VSOMEIP_SD_PROTECTION_OPTION_HPP
#define VSOMEIP_SD_PROTECTION_OPTION_HPP

#include <vsomeip/primitive_types.hpp>
#include <vsomeip/sd/option.hpp>

namespace vsomeip {
namespace sd {

class protection_option
		: virtual public option {
public:
	virtual ~protection_option() {};

	virtual alive_counter get_alive_counter() const = 0;
	virtual void set_alive_counter(alive_counter _counter) = 0;

	virtual crc get_crc() const = 0;
	virtual void set_crc(crc _crc) = 0;
};

} // namespace sd
} // namespace vsomeip

#endif // VSOMEIP_SD_PROTECTION_OPTION_HPP
