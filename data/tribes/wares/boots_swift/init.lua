push_textdomain("tribes")

dirname = path.dirname(__file__)

descriptions:new_ware_type {
   name = "boots_swift",
   -- TRANSLATORS: This is a ware name used in lists of wares
   descname = pgettext("ware", "Swift Boots"),
   icon = dirname .. "menu.png",

   animations = {
      idle = {
         directory = dirname,
         basename = "idle",
         hotspot = { 9, 13 },
      },
   }
}

pop_textdomain()
