//
//  MainView.swift
//  Example
//
//  Created by Winlentia on 12.06.2021.
//

import SwiftUI

struct MainView: View {
    var body: some View {
        NavigationView{
            VStack {
                Text("Hello, World!")
                ContentView()
            }
            
        }.navigationBarTitle("MainView")
        
    }
}

struct MainView_Previews: PreviewProvider {
    static var previews: some View {
        MainView()
    }
}
