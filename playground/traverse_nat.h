//
// Part of Metta OS. Check http://metta.exquance.com for latest version.
//
// Copyright 2007 - 2014, Stanislav Karchebnyy <berkus@exquance.com>
//
// Distributed under the Boost Software License, Version 1.0.
// (See file LICENSE_1_0.txt or a copy at http://www.boost.org/LICENSE_1_0.txt)
//
#pragma once

#include <memory>
#include "upnpclient.h"

namespace ssu { class host; }

std::shared_ptr<upnp::UpnpIgdClient> traverse_nat(std::shared_ptr<ssu::host> host);
