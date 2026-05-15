/*
 * Copyright (C) 2008-2017 TrinityCore <https://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <https://www.gnu.org/licenses/>.
 */

/*
 * Modernized Asio forward declarations for Boost 1.70+
 */

#ifndef AsioHacksFwd_h__
#define AsioHacksFwd_h__

#include <boost/asio/io_context.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/steady_timer.hpp>
#include <boost/asio/strand.hpp>

namespace Trinity
{
    using AsioIoContext = boost::asio::io_context;

    using AsioStrand =
        boost::asio::strand<
            boost::asio::io_context::executor_type>;

    using TcpResolver =
        boost::asio::ip::tcp::resolver;

    using TcpEndpoint =
        boost::asio::ip::tcp::endpoint;

    using DeadlineTimer =
        boost::asio::steady_timer;
}

#endif // AsioHacksFwd_h__
