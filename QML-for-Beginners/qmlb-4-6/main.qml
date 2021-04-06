import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    property var middle: (height / 2) - 50

      CustomButton {
          id: button1
          x: 100
          y: middle
          color: "red"
          colorClicked: "orange"
          title: "Button 1"
      }

      CustomButton {
          id: button2
          x: (parent.width / 2) - (width / 2)
          y: middle
          color: "blue"
          colorClicked: "orange"
          title: "Button 2"
      }

      CustomButton {
          id: button3
          x: parent.width - 200
          y: middle
          color: "green"
          colorClicked: "orange"
          title: "Button 3<br>Testing!"
      }

      CustomButton {
          id: button4
          x: (parent.width / 2) - (width / 2)
          y: middle + 120
          width: 500
          height: 35
          color: "lightblue"
          colorClicked: "orange"
          title: "<b>Super</b> <i>Long</i> <u>Button</u>"
      }
}
