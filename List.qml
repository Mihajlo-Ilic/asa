import QtQuick 2.0
import QtQuick.Controls 2.15
import mihajlo.ekrani 1.0

View
{

    ListView
    {
        model: controller.listModel
        width: parent.width
        height: parent.height
        anchors.fill: parent
        anchors.topMargin: 100
        spacing: 30

        delegate: Button
        {
            anchors.horizontalCenter: parent.horizontalCenter
            width: 200
            height: 50
            text: model.title
            font.pixelSize: 30
            onClicked: controller.listModel.clicked(index)
            background: Rectangle
            {
                width: 200
                height: 50
                color: "gray"
            }
        }
    }
}
