/****************************************************************************
 *                                                                          *
 *  This file is part of guh.                                               *
 *                                                                          *
 *  Guh is free software: you can redistribute it and/or modify             *
 *  it under the terms of the GNU General Public License as published by    *
 *  the Free Software Foundation, version 2 of the License.                 *
 *                                                                          *
 *  Guh is distributed in the hope that it will be useful,                  *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of          *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
 *  GNU General Public License for more details.                            *
 *                                                                          *
 *  You should have received a copy of the GNU General Public License       *
 *  along with guh.  If not, see <http://www.gnu.org/licenses/>.            *
 *                                                                          *
 ***************************************************************************/

#ifndef TRIGGERTYPE_H
#define TRIGGERTYPE_H

#include <QUuid>
#include <QVariantMap>

class EventType
{
public:
    EventType(const QUuid &id);

    QUuid id() const;

    QString name() const;
    void setName(const QString &name);

    QVariantList parameters() const;
    void setParameters(const QVariantList &parameters);

private:
    QUuid m_id;
    QString m_name;

    QVariantList m_parameters;

};

#endif // TRIGGERTYPE_H