/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(wireshark_connector.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(fcd645d2eb8f7772de5e8ded1ce89be8)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <foo/wireshark_connector.h>
// pydoc.h is automatically generated in the build directory
#include <wireshark_connector_pydoc.h>

void bind_wireshark_connector(py::module& m)
{

    using wireshark_connector = ::gr::foo::wireshark_connector;


    py::class_<wireshark_connector,
               gr::block,
               gr::basic_block,
               std::shared_ptr<wireshark_connector>>(
        m, "wireshark_connector", D(wireshark_connector))

        .def(py::init(&wireshark_connector::make),
             py::arg("type"),
             py::arg("debug") = false,
             D(wireshark_connector, make))


        ;

    py::enum_<::gr::foo::LinkType>(m, "LinkType")
        .value("WIFI", ::gr::foo::LinkType::WIFI)             // 127
        .value("ZIGBEE", ::gr::foo::LinkType::ZIGBEE)         // 195
        .value("ZIGBEE_TAP", ::gr::foo::LinkType::ZIGBEE_TAP) // 283
        .export_values();

    py::implicitly_convertible<int, ::gr::foo::LinkType>();
}
