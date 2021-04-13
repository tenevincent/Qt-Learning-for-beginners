import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        color: "pink"
        anchors.centerIn: parent
        width: 300
        height: 400
        clip: false

        Flow {
            anchors.centerIn: parent
            /*
                 Flow.LeftToRight (default) - Items are positioned next to to each other according to the layoutDirection until the width of the Flow is exceeded, then wrapped to the next line.
                 Flow.TopToBottom - Items are positioned next to each other from top to bottom until the height of the Flow is exceeded, then wrapped to the next column.
               */
            flow: Flow.LeftToRight //Flow.LeftToRight //Flow.TopToBottom
            spacing: 5
            CustomShape {color: "red"}
            CustomShape {color: "yellow"}
            CustomShape {color: "green"}
            CustomShape {color: "blue"}
            CustomShape {color: "black"}
            CustomShape {color: "gray"}
            CustomShape {color: "teal"}
            CustomShape {color: "brown"}
            CustomShape {color: "orange"}
        }

    }
}
