import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

import mihajlo.rutiranje 1.0

Window {
    width: 480
    height: 640
    visible: true
    title: qsTr("Hello World")

    StackView
    {
        anchors.fill: parent
        id: mainStack
    }

    Router
    {
        id: router
        onScreenPushed:
        {
            if (type === 2)
            {
                mainStack.push("List.qml",{"controller":screen})
            }
        }

        onScreenPoped:
        {
            mainStack.pop();
        }
    }
}
