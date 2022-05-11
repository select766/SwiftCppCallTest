//
//  ContentView.swift
//  SwiftCppCallTest
//
//  Created by Masatoshi Hidaka on 2022/05/11.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        Text("Hello, world!")
            .padding()
        Button(action: {
            print(addc(2, 3))
        }) {
            Text("addc")
        }
        Button(action: {
            let obj = addcpp_create() // UnsafeMutableRawPointer!
            addcpp_add(obj, 5)
            addcpp_add(obj, 6)
            print(addcpp_get_sum(obj))
        }) {
            Text("addcpp")
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
