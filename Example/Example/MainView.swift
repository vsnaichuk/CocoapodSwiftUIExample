//
//  MainView.swift
//  Example
//
//

import SwiftUI
import YocoSDK

struct MainView: View {
    var body: some View {
        NavigationView{
            VStack {
                Button("Initialise", action: {
                    Yoco.initialise()
                })

                Spacer(minLength: 20)

                Button("Configure", action: {
                    Yoco.configure(secret: "", loggingEnabled: true, environment: .production)
                })

                Spacer(minLength: 20)
            }

        }.navigationBarTitle("MainView")

    }
}

struct MainView_Previews: PreviewProvider {
    static var previews: some View {
        MainView()
    }
}
