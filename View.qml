import QtQuick 2.15
import QtQuick.Controls 2.15
import mihajlo.ekrani 1.0

Page
{
    property var controller : null;

    Button
    {
        text: "back"
        font.pixelSize: 30
        onClicked: controller.back()
        visible: controller.hasBack
    }

    Text
    {
        id: name
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        text: controller != null ? controller.title : "";
        font.pixelSize: 30
    }
}
