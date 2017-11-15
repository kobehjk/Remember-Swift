//
//  ViewController.swift
//  Remember_Swift
//
//  Created by hjk on 2017/11/15.
//  Copyright © 2017年 kobehjk. All rights reserved.
//

import UIKit

class ViewController: GLIRViewController {

    override func viewDidLoad() {
        self.rippleImageName = #imageLiteral(resourceName: "星空23")
        super.viewDidLoad()
        view.backgroundColor = UIColor.white
        initGesture()
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

extension ViewController{
    private func initGesture(){
        let singleGesture = UITapGestureRecognizer.init(target: self, action: #selector(handleGesture(gesture:)))
        let panGesture = UIPanGestureRecognizer.init(target: self, action: #selector(handleGesture(gesture:)))
        view.addGestureRecognizer(singleGesture)
        view.addGestureRecognizer(panGesture)
    }
    
    @objc fileprivate func handleGesture(gesture:UIGestureRecognizer){
        let point = gesture.location(in: nil)
        ripple.initiateRipple(atLocation: point)
    }
}

