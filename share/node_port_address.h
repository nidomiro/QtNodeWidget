/*
 * Copyright 2016  Niclas Roßberger
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef NODE_PORT_ADRESS_H
#define NODE_PORT_ADRESS_H

#include "qtnodesshare_global.h"
#include "node_port_type.h"

#include <QUuid>
#include <QMap>
#include <QUrl>

class QTNODESSHARESHARED_EXPORT NodePortAddress
{
public:

    QUuid sceneAddress; // normally unused
    QUuid nodeAddress;
    short port = -1;
    NodePortType type = NodePortType::NONE;


    bool isNull() const;
    bool operator==(const NodePortAddress &other) const;
    bool operator!=(const NodePortAddress &other) const;

    QString toString() const;


};


extern "C" QTNODESSHARESHARED_EXPORT QUrl nodePortAddressToUrl(const NodePortAddress &node);
extern "C" QTNODESSHARESHARED_EXPORT NodePortAddress nodePortAddressFromUrl(const QUrl &url);


#endif // NODE_PORT_ADRESS_H
