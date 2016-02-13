//
//  ViewController.swift
//  FirstSwiftApp
//
//  Created by CICCC1 on 2016-02-12.
//  Copyright © 2016 Ideia do Luiz. All rights reserved.
//

import UIKit

class ViewController: UIViewController
{
    @IBOutlet weak var lblCount: UILabel!
    @IBOutlet weak var txtNumber: UITextField!
    
    override func viewDidLoad()
    {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning()
    {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func Add1OnClick(sender: UIButton)
    {
        if let textNumber = lblCount.text, let textCountNumber = txtNumber.text
        {
            var number:Int? = Int(textNumber)
            let countNumber:Int? = Int(textCountNumber)
            
            if number != nil && countNumber != nil
            {
                number = number! + countNumber!
                lblCount.text = String(number!)
            }
        }
    }
}

